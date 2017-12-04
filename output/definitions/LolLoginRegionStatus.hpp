#ifndef SWAGGER_TYPES_LolLoginRegionStatus_HPP
#define SWAGGER_TYPES_LolLoginRegionStatus_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolLoginRegionStatus {
'    // 
    bool enabled;
    // 
    bool isLQFallbackAllowed;
    // 
    bool isUserInfoEnabled;
    // 
    std::string platformId;
  };

  void to_json(nlohmann::json& j, const LolLoginRegionStatus& v) {
    j["enabled"] = v.enabled;
    j["isLQFallbackAllowed"] = v.isLQFallbackAllowed;
    j["isUserInfoEnabled"] = v.isUserInfoEnabled;
    j["platformId"] = v.platformId;
  }

  void from_json(const nlohmann::json& j, LolLoginRegionStatus& v) {
    v.enabled = j.at("enabled").get<bool>;
    v.isLQFallbackAllowed = j.at("isLQFallbackAllowed").get<bool>;
    v.isUserInfoEnabled = j.at("isUserInfoEnabled").get<bool>;
    v.platformId = j.at("platformId").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLoginRegionStatus_HPP
