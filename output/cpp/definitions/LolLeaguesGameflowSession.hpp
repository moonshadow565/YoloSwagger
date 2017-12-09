#pragma once
#include <json.hpp>
#include <optional>
#include "LolLeaguesGameflowPhase.hpp"
#include "LolLeaguesGameflowGameData.hpp"
namespace leagueapi {
  struct LolLeaguesGameflowSession_t {
    LolLeaguesGameflowGameData_t gameData;
    LolLeaguesGameflowPhase_t phase;
  };

  inline void to_json(nlohmann::json& j, const LolLeaguesGameflowSession_t& v) {
    j["gameData"] = v.gameData;
    j["phase"] = v.phase;
  }

  inline void from_json(const nlohmann::json& j, LolLeaguesGameflowSession_t& v) {
    v.gameData = j.at("gameData").get<LolLeaguesGameflowGameData_t>();
    v.phase = j.at("phase").get<LolLeaguesGameflowPhase_t>();
  }
  inline std::string to_string(const LolLeaguesGameflowSession_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
