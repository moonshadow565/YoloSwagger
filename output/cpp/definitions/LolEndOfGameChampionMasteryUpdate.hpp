#pragma once
#include <json.hpp>
#include <optional>
#include "LolEndOfGameChampionMasteryGrade.hpp"
#include "LolEndOfGameChampionMasteryMini.hpp"
namespace leagueapi {
  struct LolEndOfGameChampionMasteryUpdate_t {
    int64_t bonusPointsGained;
    int32_t championId;
    uint64_t gameId;
    std::string grade;
    bool hasLeveledUp;
    std::string id;
    int64_t level;
    std::vector<LolEndOfGameChampionMasteryMini_t> levelUpList;
    std::vector<LolEndOfGameChampionMasteryGrade_t> memberGrades;
    uint64_t playerId;
    int64_t pointsBeforeGame;
    int64_t pointsGained;
    int64_t pointsGainedIndividualContribution;
    int64_t pointsSinceLastLevelBeforeGame;
    int64_t pointsUntilNextLevelAfterGame;
    int64_t pointsUntilNextLevelBeforeGame;
    int64_t score;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameChampionMasteryUpdate_t& v) {
    j["bonusPointsGained"] = v.bonusPointsGained;
    j["championId"] = v.championId;
    j["gameId"] = v.gameId;
    j["grade"] = v.grade;
    j["hasLeveledUp"] = v.hasLeveledUp;
    j["id"] = v.id;
    j["level"] = v.level;
    j["levelUpList"] = v.levelUpList;
    j["memberGrades"] = v.memberGrades;
    j["playerId"] = v.playerId;
    j["pointsBeforeGame"] = v.pointsBeforeGame;
    j["pointsGained"] = v.pointsGained;
    j["pointsGainedIndividualContribution"] = v.pointsGainedIndividualContribution;
    j["pointsSinceLastLevelBeforeGame"] = v.pointsSinceLastLevelBeforeGame;
    j["pointsUntilNextLevelAfterGame"] = v.pointsUntilNextLevelAfterGame;
    j["pointsUntilNextLevelBeforeGame"] = v.pointsUntilNextLevelBeforeGame;
    j["score"] = v.score;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameChampionMasteryUpdate_t& v) {
    v.bonusPointsGained = j.at("bonusPointsGained").get<int64_t>();
    v.championId = j.at("championId").get<int32_t>();
    v.gameId = j.at("gameId").get<uint64_t>();
    v.grade = j.at("grade").get<std::string>();
    v.hasLeveledUp = j.at("hasLeveledUp").get<bool>();
    v.id = j.at("id").get<std::string>();
    v.level = j.at("level").get<int64_t>();
    v.levelUpList = j.at("levelUpList").get<std::vector<LolEndOfGameChampionMasteryMini_t>>();
    v.memberGrades = j.at("memberGrades").get<std::vector<LolEndOfGameChampionMasteryGrade_t>>();
    v.playerId = j.at("playerId").get<uint64_t>();
    v.pointsBeforeGame = j.at("pointsBeforeGame").get<int64_t>();
    v.pointsGained = j.at("pointsGained").get<int64_t>();
    v.pointsGainedIndividualContribution = j.at("pointsGainedIndividualContribution").get<int64_t>();
    v.pointsSinceLastLevelBeforeGame = j.at("pointsSinceLastLevelBeforeGame").get<int64_t>();
    v.pointsUntilNextLevelAfterGame = j.at("pointsUntilNextLevelAfterGame").get<int64_t>();
    v.pointsUntilNextLevelBeforeGame = j.at("pointsUntilNextLevelBeforeGame").get<int64_t>();
    v.score = j.at("score").get<int64_t>();
  }
}
