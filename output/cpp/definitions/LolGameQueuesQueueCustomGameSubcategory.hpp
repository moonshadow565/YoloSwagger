#pragma once
#include <json.hpp>
#include <optional>
#include "LolGameQueuesQueueAvailability.hpp"
#include "LolGameQueuesQueueGameTypeConfig.hpp"
namespace leagueapi {
  struct LolGameQueuesQueueCustomGameSubcategory_t {
    std::string gameMode;
    std::string gameMutator;
    int32_t mapId;
    uint32_t maxLevel;
    int32_t maxPlayerCount;
    int32_t maximumParticipantListSize;
    uint32_t minLevel;
    int32_t minimumParticipantListSize;
    std::vector<LolGameQueuesQueueGameTypeConfig_t> mutators;
    int32_t numPlayersPerTeam;
    LolGameQueuesQueueAvailability_t queueAvailability;
  };

  inline void to_json(nlohmann::json& j, const LolGameQueuesQueueCustomGameSubcategory_t& v) {
    j["gameMode"] = v.gameMode;
    j["gameMutator"] = v.gameMutator;
    j["mapId"] = v.mapId;
    j["maxLevel"] = v.maxLevel;
    j["maxPlayerCount"] = v.maxPlayerCount;
    j["maximumParticipantListSize"] = v.maximumParticipantListSize;
    j["minLevel"] = v.minLevel;
    j["minimumParticipantListSize"] = v.minimumParticipantListSize;
    j["mutators"] = v.mutators;
    j["numPlayersPerTeam"] = v.numPlayersPerTeam;
    j["queueAvailability"] = v.queueAvailability;
  }

  inline void from_json(const nlohmann::json& j, LolGameQueuesQueueCustomGameSubcategory_t& v) {
    v.gameMode = j.at("gameMode").get<std::string>();
    v.gameMutator = j.at("gameMutator").get<std::string>();
    v.mapId = j.at("mapId").get<int32_t>();
    v.maxLevel = j.at("maxLevel").get<uint32_t>();
    v.maxPlayerCount = j.at("maxPlayerCount").get<int32_t>();
    v.maximumParticipantListSize = j.at("maximumParticipantListSize").get<int32_t>();
    v.minLevel = j.at("minLevel").get<uint32_t>();
    v.minimumParticipantListSize = j.at("minimumParticipantListSize").get<int32_t>();
    v.mutators = j.at("mutators").get<std::vector<LolGameQueuesQueueGameTypeConfig_t>>();
    v.numPlayersPerTeam = j.at("numPlayersPerTeam").get<int32_t>();
    v.queueAvailability = j.at("queueAvailability").get<LolGameQueuesQueueAvailability_t>();
  }
}
