#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PaymentsPMCStartUrlResult_t {
    std::string createdAt;
    std::string id;
    std::string localeId;
    std::string userId;
    int16_t summonerLevel;
    std::string pmcStartUrl;
    std::string playerFacingId;
  };

  inline void to_json(nlohmann::json& j, const PaymentsPMCStartUrlResult_t& v) {
    j["createdAt"] = v.createdAt;
    j["id"] = v.id;
    j["localeId"] = v.localeId;
    j["userId"] = v.userId;
    j["summonerLevel"] = v.summonerLevel;
    j["pmcStartUrl"] = v.pmcStartUrl;
    j["playerFacingId"] = v.playerFacingId;
  }

  inline void from_json(const nlohmann::json& j, PaymentsPMCStartUrlResult_t& v) {
    v.createdAt = j.at("createdAt").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.localeId = j.at("localeId").get<std::string>();
    v.userId = j.at("userId").get<std::string>();
    v.summonerLevel = j.at("summonerLevel").get<int16_t>();
    v.pmcStartUrl = j.at("pmcStartUrl").get<std::string>();
    v.playerFacingId = j.at("playerFacingId").get<std::string>();
  }
  inline std::string to_string(const PaymentsPMCStartUrlResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
