#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowPatcherProductStateAction.hpp"
namespace leagueapi {
  struct LolGameflowPatcherProductState_t {
    bool isUpdateAvailable;
    bool isUpToDate;
    bool isCorrupted;
    LolGameflowPatcherProductStateAction_t action;
    bool isStopped;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowPatcherProductState_t& v) {
    j["isUpdateAvailable"] = v.isUpdateAvailable;
    j["isUpToDate"] = v.isUpToDate;
    j["isCorrupted"] = v.isCorrupted;
    j["action"] = v.action;
    j["isStopped"] = v.isStopped;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowPatcherProductState_t& v) {
    v.isUpdateAvailable = j.at("isUpdateAvailable").get<bool>();
    v.isUpToDate = j.at("isUpToDate").get<bool>();
    v.isCorrupted = j.at("isCorrupted").get<bool>();
    v.action = j.at("action").get<LolGameflowPatcherProductStateAction_t>();
    v.isStopped = j.at("isStopped").get<bool>();
  }
  inline std::string to_string(const LolGameflowPatcherProductState_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
