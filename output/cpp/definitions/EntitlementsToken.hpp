#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct EntitlementsToken_t {
    std::string subject;
    std::string token;
    std::string accessToken;
    std::vector<std::string> entitlements;
    std::string issuer;
  };

  inline void to_json(nlohmann::json& j, const EntitlementsToken_t& v) {
    j["subject"] = v.subject;
    j["token"] = v.token;
    j["accessToken"] = v.accessToken;
    j["entitlements"] = v.entitlements;
    j["issuer"] = v.issuer;
  }

  inline void from_json(const nlohmann::json& j, EntitlementsToken_t& v) {
    v.subject = j.at("subject").get<std::string>();
    v.token = j.at("token").get<std::string>();
    v.accessToken = j.at("accessToken").get<std::string>();
    v.entitlements = j.at("entitlements").get<std::vector<std::string>>();
    v.issuer = j.at("issuer").get<std::string>();
  }
}
