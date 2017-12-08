#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchmakingQueueCustomGameSpectatorPolicy.hpp"
namespace leagueapi {
  struct LolMatchmakingLobbyStatus_t {
    std::optional<std::string_t> lobbyId;
    int32_t_t queueId;
    bool_t allowedPlayAgain;
    LolMatchmakingQueueCustomGameSpectatorPolicy_t customSpectatorPolicy;
    bool_t isSpectator;
    bool_t isCustom;
    bool_t isLeader;
    std::vector<uint64_t> memberSummonerIds;
  };

  inline void to_json(nlohmann::json& j, const LolMatchmakingLobbyStatus_t& v) {
    if(v.lobbyId)
      j["lobbyId"] = *v.lobbyId;
    j["queueId"] = v.queueId;
    j["allowedPlayAgain"] = v.allowedPlayAgain;
    j["customSpectatorPolicy"] = v.customSpectatorPolicy;
    j["isSpectator"] = v.isSpectator;
    j["isCustom"] = v.isCustom;
    j["isLeader"] = v.isLeader;
    j["memberSummonerIds"] = v.memberSummonerIds;
  }

  inline void from_json(const nlohmann::json& j, LolMatchmakingLobbyStatus_t& v) {
    if(auto it = j.find("lobbyId"); it != j.end() && !it->is_null())
      v.lobbyId = it->get<std::string_t>();
    v.queueId = j.at("queueId").get<int32_t_t>();
    v.allowedPlayAgain = j.at("allowedPlayAgain").get<bool_t>();
    v.customSpectatorPolicy = j.at("customSpectatorPolicy").get<LolMatchmakingQueueCustomGameSpectatorPolicy_t>();
    v.isSpectator = j.at("isSpectator").get<bool_t>();
    v.isCustom = j.at("isCustom").get<bool_t>();
    v.isLeader = j.at("isLeader").get<bool_t>();
    v.memberSummonerIds = j.at("memberSummonerIds").get<std::vector<uint64_t>>();
  }
  inline std::string to_string(const LolMatchmakingLobbyStatus_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
