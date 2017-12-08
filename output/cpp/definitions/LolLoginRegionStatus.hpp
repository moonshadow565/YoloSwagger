#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginRegionStatus_t {
    std::string platformId;
    bool isLQFallbackAllowed;
    bool enabled;
    bool isUserInfoEnabled;
  };

  inline void to_json(nlohmann::json& j, const LolLoginRegionStatus_t& v) {
    j["platformId"] = v.platformId;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["enabled"] = v.enabled;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
  }

  inline void from_json(const nlohmann::json& j, LolLoginRegionStatus_t& v) {
    v.platformId = j.at("platformId").get<std::string>();
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>();
    v.enabled = j.at("enabled").get<bool>();
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>();
  }
  inline std::string to_string(const LolLoginRegionStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
