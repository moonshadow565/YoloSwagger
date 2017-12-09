#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct RecofrienderNetworkConfig_t {
    bool enabled;
    std::string name;
    std::string linkUrlTemplate;
    std::string unlinkUrlTemplate;
  };

  inline void to_json(nlohmann::json& j, const RecofrienderNetworkConfig_t& v) {
    j["enabled"] = v.enabled;
    j["name"] = v.name;
    j["linkUrlTemplate"] = v.linkUrlTemplate;
    j["unlinkUrlTemplate"] = v.unlinkUrlTemplate;
  }

  inline void from_json(const nlohmann::json& j, RecofrienderNetworkConfig_t& v) {
    v.enabled = j.at("enabled").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.linkUrlTemplate = j.at("linkUrlTemplate").get<std::string>();
    v.unlinkUrlTemplate = j.at("unlinkUrlTemplate").get<std::string>();
  }
  inline std::string to_string(const RecofrienderNetworkConfig_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
