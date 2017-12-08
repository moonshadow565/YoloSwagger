#pragma once
#include <json.hpp>
#include <optional>
#include "ChampSelectLcdsPlayerChampionSelectionDTO.hpp"
#include "BannedChampion.hpp"
namespace leagueapi {
  struct ChampSelectLcdsGameDTO_t {
    int64_t_t optimisticLock;
    std::string_t queueTypeName;
    std::string_t statusOfParticipants;
    std::string_t name;
    std::vector<nlohmann::json> teamOne;
    int32_t_t pickTurn;
    int64_t_t spectatorDelay;
    std::vector<BannedChampion_t> bannedChampions;
    std::string_t roomName;
    std::string_t gameState;
    std::vector<std::string> gameMutators;
    std::vector<nlohmann::json> teamTwo;
    std::string_t roomPassword;
    std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t> playerChampionSelections;
    uint64_t_t id;
  };

  inline void to_json(nlohmann::json& j, const ChampSelectLcdsGameDTO_t& v) {
    j["optimisticLock"] = v.optimisticLock;
    j["queueTypeName"] = v.queueTypeName;
    j["statusOfParticipants"] = v.statusOfParticipants;
    j["name"] = v.name;
    j["teamOne"] = v.teamOne;
    j["pickTurn"] = v.pickTurn;
    j["spectatorDelay"] = v.spectatorDelay;
    j["bannedChampions"] = v.bannedChampions;
    j["roomName"] = v.roomName;
    j["gameState"] = v.gameState;
    j["gameMutators"] = v.gameMutators;
    j["teamTwo"] = v.teamTwo;
    j["roomPassword"] = v.roomPassword;
    j["playerChampionSelections"] = v.playerChampionSelections;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, ChampSelectLcdsGameDTO_t& v) {
    v.optimisticLock = j.at("optimisticLock").get<int64_t_t>();
    v.queueTypeName = j.at("queueTypeName").get<std::string_t>();
    v.statusOfParticipants = j.at("statusOfParticipants").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
    v.teamOne = j.at("teamOne").get<std::vector<nlohmann::json>>();
    v.pickTurn = j.at("pickTurn").get<int32_t_t>();
    v.spectatorDelay = j.at("spectatorDelay").get<int64_t_t>();
    v.bannedChampions = j.at("bannedChampions").get<std::vector<BannedChampion_t>>();
    v.roomName = j.at("roomName").get<std::string_t>();
    v.gameState = j.at("gameState").get<std::string_t>();
    v.gameMutators = j.at("gameMutators").get<std::vector<std::string>>();
    v.teamTwo = j.at("teamTwo").get<std::vector<nlohmann::json>>();
    v.roomPassword = j.at("roomPassword").get<std::string_t>();
    v.playerChampionSelections = j.at("playerChampionSelections").get<std::vector<ChampSelectLcdsPlayerChampionSelectionDTO_t>>();
    v.id = j.at("id").get<uint64_t_t>();
  }
  inline std::string to_string(const ChampSelectLcdsGameDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
