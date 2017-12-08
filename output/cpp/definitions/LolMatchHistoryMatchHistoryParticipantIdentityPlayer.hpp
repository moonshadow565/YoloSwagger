#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t {
    std::string_t currentPlatformId;
    std::string_t summonerName;
    std::string_t matchHistoryUri;
    std::string_t platformId;
    uint64_t_t currentAccountId;
    int32_t_t profileIcon;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    j["currentPlatformId"] = v.currentPlatformId;
    j["summonerName"] = v.summonerName;
    j["matchHistoryUri"] = v.matchHistoryUri;
    j["platformId"] = v.platformId;
    j["currentAccountId"] = v.currentAccountId;
    j["profileIcon"] = v.profileIcon;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    v.currentPlatformId = j.at("currentPlatformId").get<std::string_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.matchHistoryUri = j.at("matchHistoryUri").get<std::string_t>();
    v.platformId = j.at("platformId").get<std::string_t>();
    v.currentAccountId = j.at("currentAccountId").get<uint64_t_t>();
    v.profileIcon = j.at("profileIcon").get<int32_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryParticipantIdentityPlayer_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
