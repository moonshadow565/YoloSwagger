#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChatChatSummoner_t {
    int32_t profileIconId;
    uint32_t summonerLevel;
    std::string displayName;
    uint64_t summonerId;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatSummoner_t& v) {
    j["profileIconId"] = v.profileIconId;
    j["summonerLevel"] = v.summonerLevel;
    j["displayName"] = v.displayName;
    j["summonerId"] = v.summonerId;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatSummoner_t& v) {
    v.profileIconId = j.at("profileIconId").get<int32_t>();
    v.summonerLevel = j.at("summonerLevel").get<uint32_t>();
    v.displayName = j.at("displayName").get<std::string>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
  }
  inline std::string to_string(const LolChatChatSummoner_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
