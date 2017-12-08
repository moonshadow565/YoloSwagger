#pragma once
#include <json.hpp>
#include <optional>
#include "LolHonorV2EndOfGameTeam.hpp"
namespace leagueapi {
  struct LolHonorV2EndOfGameStats_t {
    uint64_t_t gameId;
    int32_t_t championId;
    std::string_t summonerName;
    bool_t ranked;
    bool_t gameEndedInEarlySurrender;
    std::string_t gameMode;
    std::string_t gameType;
    std::vector<LolHonorV2EndOfGameTeam_t> teams;
    std::string_t difficulty;
    std::string_t myTeamStatus;
    bool_t invalid;
    std::vector<std::string> gameMutators;
    int32_t_t gameLength;
    std::string_t queueType;
    bool_t imbalancedTeamsNoPoints;
    uint64_t_t reportGameId;
    uint64_t_t summonerId;
    uint64_t_t accountId;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2EndOfGameStats_t& v) {
    j["gameId"] = v.gameId;
    j["championId"] = v.championId;
    j["summonerName"] = v.summonerName;
    j["ranked"] = v.ranked;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["gameMode"] = v.gameMode;
    j["gameType"] = v.gameType;
    j["teams"] = v.teams;
    j["difficulty"] = v.difficulty;
    j["myTeamStatus"] = v.myTeamStatus;
    j["invalid"] = v.invalid;
    j["gameMutators"] = v.gameMutators;
    j["gameLength"] = v.gameLength;
    j["queueType"] = v.queueType;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["reportGameId"] = v.reportGameId;
    j["summonerId"] = v.summonerId;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2EndOfGameStats_t& v) {
    v.gameId = j.at("gameId").get<uint64_t_t>();
    v.championId = j.at("championId").get<int32_t_t>();
    v.summonerName = j.at("summonerName").get<std::string_t>();
    v.ranked = j.at("ranked").get<bool_t>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool_t>();
    v.gameMode = j.at("gameMode").get<std::string_t>();
    v.gameType = j.at("gameType").get<std::string_t>();
    v.teams = j.at("teams").get<std::vector<LolHonorV2EndOfGameTeam_t>>();
    v.difficulty = j.at("difficulty").get<std::string_t>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string_t>();
    v.invalid = j.at("invalid").get<bool_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameLength = j.at("gameLength").get<int32_t_t>();
    v.queueType = j.at("queueType").get<std::string_t>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t_t>();
    v.summonerId = j.at("summonerId").get<uint64_t_t>();
    v.accountId = j.at("accountId").get<uint64_t_t>();
  }
  inline std::string to_string(const LolHonorV2EndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
