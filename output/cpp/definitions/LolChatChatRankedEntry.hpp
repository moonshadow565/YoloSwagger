#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatChatRankedQueue.hpp"
#include "LolChatChatRankedTier.hpp"
namespace leagueapi {
  struct LolChatChatRankedEntry_t {
    uint64_t_t division;
    uint64_t_t wins;
    LolChatChatRankedTier_t rankedTier;
    uint64_t_t games;
    std::string_t leagueName;
    LolChatChatRankedQueue_t rankedQueue;
  };

  inline void to_json(nlohmann::json& j, const LolChatChatRankedEntry_t& v) {
    j["division"] = v.division;
    j["wins"] = v.wins;
    j["rankedTier"] = v.rankedTier;
    j["games"] = v.games;
    j["leagueName"] = v.leagueName;
    j["rankedQueue"] = v.rankedQueue;
  }

  inline void from_json(const nlohmann::json& j, LolChatChatRankedEntry_t& v) {
    v.division = j.at("division").get<uint64_t_t>();
    v.wins = j.at("wins").get<uint64_t_t>();
    v.rankedTier = j.at("rankedTier").get<LolChatChatRankedTier_t>();
    v.games = j.at("games").get<uint64_t_t>();
    v.leagueName = j.at("leagueName").get<std::string_t>();
    v.rankedQueue = j.at("rankedQueue").get<LolChatChatRankedQueue_t>();
  }
  inline std::string to_string(const LolChatChatRankedEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
