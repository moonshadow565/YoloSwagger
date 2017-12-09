#pragma once
#include <json.hpp>
#include <optional>
#include "LcdsGameMap.hpp"
#include "LcdsPlayerParticipant.hpp"
namespace leagueapi {
  struct LcdsPracticeGameSearchResult_t {
    std::string name;
    bool privateGame;
    int32_t spectatorCount;
    int32_t team2Count;
    int32_t team1Count;
    LcdsGameMap_t gameMap;
    int32_t maxNumPlayers;
    uint64_t id;
    LcdsPlayerParticipant_t owner;
    std::string gameMode;
    std::string allowSpectators;
    std::string pickType;
    int32_t gameMapId;
  };

  inline void to_json(nlohmann::json& j, const LcdsPracticeGameSearchResult_t& v) {
    j["name"] = v.name;
    j["privateGame"] = v.privateGame;
    j["spectatorCount"] = v.spectatorCount;
    j["team2Count"] = v.team2Count;
    j["team1Count"] = v.team1Count;
    j["gameMap"] = v.gameMap;
    j["maxNumPlayers"] = v.maxNumPlayers;
    j["id"] = v.id;
    j["owner"] = v.owner;
    j["gameMode"] = v.gameMode;
    j["allowSpectators"] = v.allowSpectators;
    j["pickType"] = v.pickType;
    j["gameMapId"] = v.gameMapId;
  }

  inline void from_json(const nlohmann::json& j, LcdsPracticeGameSearchResult_t& v) {
    v.name = j.at("name").get<std::string>();
    v.privateGame = j.at("privateGame").get<bool>();
    v.spectatorCount = j.at("spectatorCount").get<int32_t>();
    v.team2Count = j.at("team2Count").get<int32_t>();
    v.team1Count = j.at("team1Count").get<int32_t>();
    v.gameMap = j.at("gameMap").get<LcdsGameMap_t>();
    v.maxNumPlayers = j.at("maxNumPlayers").get<int32_t>();
    v.id = j.at("id").get<uint64_t>();
    v.owner = j.at("owner").get<LcdsPlayerParticipant_t>();
    v.gameMode = j.at("gameMode").get<std::string>();
    v.allowSpectators = j.at("allowSpectators").get<std::string>();
    v.pickType = j.at("pickType").get<std::string>();
    v.gameMapId = j.at("gameMapId").get<int32_t>();
  }
  inline std::string to_string(const LcdsPracticeGameSearchResult_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
