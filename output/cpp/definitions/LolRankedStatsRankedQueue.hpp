#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class LolRankedStatsRankedQueue_t {
    RANKED_SOLO_5x5_E = 3,
    RANKED_TEAM_5x5_E = 5,
    INVALID_E = 0,
    RANKED_TEAM_3x3_E = 4,
    RANKED_FLEX_SR_E = 2,
    RANKED_FLEX_TT_E = 1,
  };

  inline void to_json(nlohmann::json& j, const LolRankedStatsRankedQueue_t& v) {
    switch(v) {
      case LolRankedStatsRankedQueue_t::RANKED_SOLO_5x5_E:
        j = "RANKED_SOLO_5x5";
      break;
      case LolRankedStatsRankedQueue_t::RANKED_TEAM_5x5_E:
        j = "RANKED_TEAM_5x5";
      break;
      case LolRankedStatsRankedQueue_t::INVALID_E:
        j = "INVALID";
      break;
      case LolRankedStatsRankedQueue_t::RANKED_TEAM_3x3_E:
        j = "RANKED_TEAM_3x3";
      break;
      case LolRankedStatsRankedQueue_t::RANKED_FLEX_SR_E:
        j = "RANKED_FLEX_SR";
      break;
      case LolRankedStatsRankedQueue_t::RANKED_FLEX_TT_E:
        j = "RANKED_FLEX_TT";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolRankedStatsRankedQueue_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "RANKED_SOLO_5x5"){
      v = LolRankedStatsRankedQueue_t::RANKED_SOLO_5x5_E;
      return;
    }
    if(s == "RANKED_TEAM_5x5"){
      v = LolRankedStatsRankedQueue_t::RANKED_TEAM_5x5_E;
      return;
    }
    if(s == "INVALID"){
      v = LolRankedStatsRankedQueue_t::INVALID_E;
      return;
    }
    if(s == "RANKED_TEAM_3x3"){
      v = LolRankedStatsRankedQueue_t::RANKED_TEAM_3x3_E;
      return;
    }
    if(s == "RANKED_FLEX_SR"){
      v = LolRankedStatsRankedQueue_t::RANKED_FLEX_SR_E;
      return;
    }
    if(s == "RANKED_FLEX_TT"){
      v = LolRankedStatsRankedQueue_t::RANKED_FLEX_TT_E;
      return;
    }
  }
}
