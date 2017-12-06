#pragma once
#include <json.hpp>
#include <optional>
#include "MatchmakingLcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct MatchmakingLcdsGameDTO_t {
    std::string gameState;
    std::string statusOfParticipants;
    std::vector<MatchmakingLcdsPlayerParticipant_t> teamOne;
    std::vector<MatchmakingLcdsPlayerParticipant_t> teamTwo;
    std::string terminatedCondition;
  };

  inline void to_json(nlohmann::json& j, const MatchmakingLcdsGameDTO_t& v) {
    j["gameState"] = v.gameState;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["teamOne"] = v.teamOne;
    j["teamTwo"] = v.teamTwo;
    j["terminatedCondition"] = v.terminatedCondition;
  }

  inline void from_json(const nlohmann::json& j, MatchmakingLcdsGameDTO_t& v) {
    v.gameState = j.at("gameState").get<std::string>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string>();
    v.teamOne = j.at("teamOne").get<std::vector<MatchmakingLcdsPlayerParticipant_t>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<MatchmakingLcdsPlayerParticipant_t>>();
    v.terminatedCondition = j.at("terminatedCondition").get<std::string>();
  }
}
