#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEmailVerificationRegionLocale_t {
    std::string webLanguage;
    std::string region;
    std::string locale;
    std::string webRegion;
  };

  inline void to_json(nlohmann::json& j, const LolEmailVerificationRegionLocale_t& v) {
    j["webLanguage"] = v.webLanguage;
    j["region"] = v.region;
    j["locale"] = v.locale;
    j["webRegion"] = v.webRegion;
  }

  inline void from_json(const nlohmann::json& j, LolEmailVerificationRegionLocale_t& v) {
    v.webLanguage = j.at("webLanguage").get<std::string>();
    v.region = j.at("region").get<std::string>();
    v.locale = j.at("locale").get<std::string>();
    v.webRegion = j.at("webRegion").get<std::string>();
  }
  inline std::string to_string(const LolEmailVerificationRegionLocale_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
