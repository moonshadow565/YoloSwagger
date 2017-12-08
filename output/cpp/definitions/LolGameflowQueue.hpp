#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameflowQueueGameCategory.hpp"
#include "LolGameflowQueueGameTypeConfig.hpp"
#include "LolGameflowQueueReward.hpp"
#include "LolGameflowQueueAvailability.hpp"
namespace leagueapi {
  struct LolGameflowQueue_t {
    LolGameflowQueueAvailability_t queueAvailability;
    std::string gameMode;
    int32_t mapId;
    bool areFreeChampionsAllowed;
    LolGameflowQueueGameTypeConfig_t gameTypeConfig;
    int32_t id;
    LolGameflowQueueGameCategory_t category;
    LolGameflowQueueReward_t queueRewards;
    uint32_t maxSummonerLevelForFirstWinOfTheDay;
    bool isTeamOnly;
    int32_t maximumParticipantListSize;
    std::string detailedDescription;
    uint32_t maxLevel;
    std::string description;
    uint32_t minLevel;
    std::string gameMutator;
    bool isRanked;
    std::string shortName;
    int32_t numPlayersPerTeam;
    bool spectatorEnabled;
    std::string name;
    std::string type;
    int32_t minimumParticipantListSize;
    bool isTeamBuilderManaged;
  };

  inline void to_json(nlohmann::json& j, const LolGameflowQueue_t& v) {
    j["queueAvailability"] = v.queueAvailability;
    j["gameMode"] = v.gameMode;
    j["mapId"] = v.mapId;
    j["areFreeChampionsAllowed"] = v.areFreeChampionsAllowed;
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["id"] = v.id;
    j["category"] = v.category;
    j["queueRewards"] = v.queueRewards;
    j["maxSummonerLevelForFirstWinOfTheDay"] = v.maxSummonerLevelForFirstWinOfTheDay;
    j["isTeamOnly"] = v.isTeamOnly;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["detailedDescription"] = v.detailedDescription;
    j["maxLevel"] = v.maxLevel;
    j["description"] = v.description;
    j["minLevel"] = v.minLevel;
    j["gameMutator"] = v.gameMutator;
    j["isRanked"] = v.isRanked;
    j["shortName"] = v.shortName;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["spectatorEnabled"] = v.spectatorEnabled;
    j["name"] = v.name;
    j["type"] = v.type;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["isTeamBuilderManaged"] = v.isTeamBuilderManaged;
  }

  inline void from_json(const nlohmann::json& j, LolGameflowQueue_t& v) {
    v.queueAvailability = j.at("queueAvailability").get<LolGameflowQueueAvailability_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.areFreeChampionsAllowed = j.at("areFreeChampionsAllowed").get<bool>();
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolGameflowQueueGameTypeConfig_t>();
    v.id = j.at("id").get<int32_t>();
    v.category = j.at("category").get<LolGameflowQueueGameCategory_t>();
    v.queueRewards = j.at("queueRewards").get<LolGameflowQueueReward_t>();
    v.maxSummonerLevelForFirstWinOfTheDay = j.at("maxSummonerLevelForFirstWinOfTheDay").get<uint32_t>();
    v.isTeamOnly = j.at("isTeamOnly").get<bool>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.detailedDescription = j.at("detailedDescription").get<std::string>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.description = j.at("description").get<std::string>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.isRanked = j.at("isRanked").get<bool>();
    v.shortName = j.at("shortName").get<std::string>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.spectatorEnabled = j.at("spectatorEnabled").get<bool>();
    v.name = j.at("name").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.isTeamBuilderManaged = j.at("isTeamBuilderManaged").get<bool>();
  }
  inline std::string to_string(const LolGameflowQueue_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
