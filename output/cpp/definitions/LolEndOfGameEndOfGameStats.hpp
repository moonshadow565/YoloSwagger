#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameEndOfGameTeamBoost.hpp"
#include "LolEndOfGameEndOfGameTeam.hpp"
#include "LolEndOfGameEndOfGamePoints.hpp"
namespace leagueapi {
  struct LolEndOfGameEndOfGameStats_t {
    int32_t rpEarned;
    int32_t loyaltyBoostXpEarned;
    int32_t coOpVsAiMinutesLeftToday;
    uint64_t previousLevel;
    std::vector<LolEndOfGameEndOfGameTeam_t> teams;
    std::string gameType;
    uint64_t userId;
    int32_t experienceEarned;
    std::optional<LolEndOfGameEndOfGameTeamBoost_t> teamBoost;
    bool leveledUp;
    uint64_t accountId;
    int32_t skinId;
    bool ranked;
    bool causedEarlySurrender;
    int32_t skinIndex;
    std::string roomPassword;
    bool gameEndedInEarlySurrender;
    int32_t experienceTotal;
    int32_t talentPointsGained;
    uint64_t currentLevel;
    int32_t ipTotal;
    int32_t ipEarned;
    std::string summonerName;
    int32_t customMsecsUntilReset;
    int32_t battleBoostIpEarned;
    int32_t customMinutesLeftToday;
    std::vector<std::string> gameMutators;
    std::string gameMode;
    nlohmann::json pointsPenalties;
    bool imbalancedTeamsNoPoints;
    bool earlySurrenderAccomplice;
    int32_t boostIpEarned;
    int32_t boostXpEarned;
    int32_t timeUntilNextFirstWinBonus;
    uint64_t reportGameId;
    int32_t odinBonusIp;
    bool teamEarlySurrendered;
    uint64_t summonerId;
    int32_t queueBonusEarned;
    std::string difficulty;
    int32_t firstWinBonus;
    LolEndOfGameEndOfGamePoints_t rerollData;
    int32_t eloChange;
    uint64_t previousXpTotal;
    uint64_t nextLevelXp;
    std::string myTeamStatus;
    bool invalid;
    int32_t coOpVsAiMsecsUntilReset;
    std::string roomName;
    int32_t gameLength;
    int32_t championId;
    std::string queueType;
    uint64_t gameId;
    int32_t globalBoostXpEarned;
    int32_t partyRewardsBonusIpEarned;
    int32_t basePoints;
    bool sendStatsToTournamentProvider;
    int32_t loyaltyBoostIpEarned;
    int32_t completionBonusPoints;
    int32_t missionsXpEarned;
    std::vector<int32_t> newSpells;
    int32_t elo;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameEndOfGameStats_t& v) {
    j["rpEarned"] = v.rpEarned;
    j["loyaltyBoostXpEarned"] = v.loyaltyBoostXpEarned;
    j["coOpVsAiMinutesLeftToday"] = v.coOpVsAiMinutesLeftToday;
    j["previousLevel"] = v.previousLevel;
    j["teams"] = v.teams;
    j["gameType"] = v.gameType;
    j["userId"] = v.userId;
    j["experienceEarned"] = v.experienceEarned;
    if(v.teamBoost)
      j["teamBoost"] = *v.teamBoost;
    j["leveledUp"] = v.leveledUp;
    j["accountId"] = v.accountId;
    j["skinId"] = v.skinId;
    j["ranked"] = v.ranked;
    j["causedEarlySurrender"] = v.causedEarlySurrender;
    j["skinIndex"] = v.skinIndex;
    j["roomPassword"] = v.roomPassword;
    j["gameEndedInEarlySurrender"] = v.gameEndedInEarlySurrender;
    j["experienceTotal"] = v.experienceTotal;
    j["talentPointsGained"] = v.talentPointsGained;
    j["currentLevel"] = v.currentLevel;
    j["ipTotal"] = v.ipTotal;
    j["ipEarned"] = v.ipEarned;
    j["summonerName"] = v.summonerName;
    j["customMsecsUntilReset"] = v.customMsecsUntilReset;
    j["battleBoostIpEarned"] = v.battleBoostIpEarned;
    j["customMinutesLeftToday"] = v.customMinutesLeftToday;
    j["gameMutators"] = v.gameMutators;
    j["gameMode"] = v.gameMode;
    j["pointsPenalties"] = v.pointsPenalties;
    j["imbalancedTeamsNoPoints"] = v.imbalancedTeamsNoPoints;
    j["earlySurrenderAccomplice"] = v.earlySurrenderAccomplice;
    j["boostIpEarned"] = v.boostIpEarned;
    j["boostXpEarned"] = v.boostXpEarned;
    j["timeUntilNextFirstWinBonus"] = v.timeUntilNextFirstWinBonus;
    j["reportGameId"] = v.reportGameId;
    j["odinBonusIp"] = v.odinBonusIp;
    j["teamEarlySurrendered"] = v.teamEarlySurrendered;
    j["summonerId"] = v.summonerId;
    j["queueBonusEarned"] = v.queueBonusEarned;
    j["difficulty"] = v.difficulty;
    j["firstWinBonus"] = v.firstWinBonus;
    j["rerollData"] = v.rerollData;
    j["eloChange"] = v.eloChange;
    j["previousXpTotal"] = v.previousXpTotal;
    j["nextLevelXp"] = v.nextLevelXp;
    j["myTeamStatus"] = v.myTeamStatus;
    j["invalid"] = v.invalid;
    j["coOpVsAiMsecsUntilReset"] = v.coOpVsAiMsecsUntilReset;
    j["roomName"] = v.roomName;
    j["gameLength"] = v.gameLength;
    j["championId"] = v.championId;
    j["queueType"] = v.queueType;
    j["gameId"] = v.gameId;
    j["globalBoostXpEarned"] = v.globalBoostXpEarned;
    j["partyRewardsBonusIpEarned"] = v.partyRewardsBonusIpEarned;
    j["basePoints"] = v.basePoints;
    j["sendStatsToTournamentProvider"] = v.sendStatsToTournamentProvider;
    j["loyaltyBoostIpEarned"] = v.loyaltyBoostIpEarned;
    j["completionBonusPoints"] = v.completionBonusPoints;
    j["missionsXpEarned"] = v.missionsXpEarned;
    j["newSpells"] = v.newSpells;
    j["elo"] = v.elo;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameEndOfGameStats_t& v) {
    v.rpEarned = j.at("rpEarned").get<int32_t>();
    v.loyaltyBoostXpEarned = j.at("loyaltyBoostXpEarned").get<int32_t>();
    v.coOpVsAiMinutesLeftToday = j.at("coOpVsAiMinutesLeftToday").get<int32_t>();
    v.previousLevel = j.at("previousLevel").get<uint64_t>();
    v.teams = j.at("teams").get<std::vector<LolEndOfGameEndOfGameTeam_t>>();
    v.gameType = j.at("gameType").get<std::string>();
    v.userId = j.at("userId").get<uint64_t>();
    v.experienceEarned = j.at("experienceEarned").get<int32_t>();
    if(auto it = j.find("teamBoost"); it != j.end() && !it->is_null())
      v.teamBoost = it->get<LolEndOfGameEndOfGameTeamBoost_t>();
    v.leveledUp = j.at("leveledUp").get<bool>();
    v.accountId = j.at("accountId").get<uint64_t>();
    v.skinId = j.at("skinId").get<int32_t>();
    v.ranked = j.at("ranked").get<bool>();
    v.causedEarlySurrender = j.at("causedEarlySurrender").get<bool>();
    v.skinIndex = j.at("skinIndex").get<int32_t>();
    v.roomPassword = j.at("roomPassword").get<std::string>();
    v.gameEndedInEarlySurrender = j.at("gameEndedInEarlySurrender").get<bool>();
    v.experienceTotal = j.at("experienceTotal").get<int32_t>();
    v.talentPointsGained = j.at("talentPointsGained").get<int32_t>();
    v.currentLevel = j.at("currentLevel").get<uint64_t>();
    v.ipTotal = j.at("ipTotal").get<int32_t>();
    v.ipEarned = j.at("ipEarned").get<int32_t>();
    v.summonerName = j.at("summonerName").get<std::string>();
    v.customMsecsUntilReset = j.at("customMsecsUntilReset").get<int32_t>();
    v.battleBoostIpEarned = j.at("battleBoostIpEarned").get<int32_t>();
    v.customMinutesLeftToday = j.at("customMinutesLeftToday").get<int32_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.pointsPenalties = j.at("pointsPenalties").get<nlohmann::json>();
    v.imbalancedTeamsNoPoints = j.at("imbalancedTeamsNoPoints").get<bool>();
    v.earlySurrenderAccomplice = j.at("earlySurrenderAccomplice").get<bool>();
    v.boostIpEarned = j.at("boostIpEarned").get<int32_t>();
    v.boostXpEarned = j.at("boostXpEarned").get<int32_t>();
    v.timeUntilNextFirstWinBonus = j.at("timeUntilNextFirstWinBonus").get<int32_t>();
    v.reportGameId = j.at("reportGameId").get<uint64_t>();
    v.odinBonusIp = j.at("odinBonusIp").get<int32_t>();
    v.teamEarlySurrendered = j.at("teamEarlySurrendered").get<bool>();
    v.summonerId = j.at("summonerId").get<uint64_t>();
    v.queueBonusEarned = j.at("queueBonusEarned").get<int32_t>();
    v.difficulty = j.at("difficulty").get<std::string>();
    v.firstWinBonus = j.at("firstWinBonus").get<int32_t>();
    v.rerollData = j.at("rerollData").get<LolEndOfGameEndOfGamePoints_t>();
    v.eloChange = j.at("eloChange").get<int32_t>();
    v.previousXpTotal = j.at("previousXpTotal").get<uint64_t>();
    v.nextLevelXp = j.at("nextLevelXp").get<uint64_t>();
    v.myTeamStatus = j.at("myTeamStatus").get<std::string>();
    v.invalid = j.at("invalid").get<bool>();
    v.coOpVsAiMsecsUntilReset = j.at("coOpVsAiMsecsUntilReset").get<int32_t>();
    v.roomName = j.at("roomName").get<std::string>();
    v.gameLength = j.at("gameLength").get<int32_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.queueType = j.at("queueType").get<std::string>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.globalBoostXpEarned = j.at("globalBoostXpEarned").get<int32_t>();
    v.partyRewardsBonusIpEarned = j.at("partyRewardsBonusIpEarned").get<int32_t>();
    v.basePoints = j.at("basePoints").get<int32_t>();
    v.sendStatsToTournamentProvider = j.at("sendStatsToTournamentProvider").get<bool>();
    v.loyaltyBoostIpEarned = j.at("loyaltyBoostIpEarned").get<int32_t>();
    v.completionBonusPoints = j.at("completionBonusPoints").get<int32_t>();
    v.missionsXpEarned = j.at("missionsXpEarned").get<int32_t>();
    v.newSpells = j.at("newSpells").get<std::vector<int32_t>>();
    v.elo = j.at("elo").get<int32_t>();
  }
  inline std::string to_string(const LolEndOfGameEndOfGameStats_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
