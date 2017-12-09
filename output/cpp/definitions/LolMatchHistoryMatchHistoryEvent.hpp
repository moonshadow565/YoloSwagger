#pragma once
#include <json.hpp>
#include <optional>
#include "LolMatchHistoryMatchHistoryPosition.hpp"
namespace leagueapi {
  struct LolMatchHistoryMatchHistoryEvent_t {
    uint16_t teamId;
    std::string laneType;
    std::string monsterType;
    LolMatchHistoryMatchHistoryPosition_t position;
    std::string monsterSubType;
    uint16_t itemId;
    std::string buildingType;
    std::string type;
    uint16_t victimId;
    uint16_t participantId;
    uint64_t timestamp;
    std::string towerType;
    std::vector<uint16_t> assistingParticipantIds;
    uint16_t skillSlot;
    uint16_t killerId;
  };

  inline void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryEvent_t& v) {
    j["teamId"] = v.teamId;
    j["laneType"] = v.laneType;
    j["monsterType"] = v.monsterType;
    j["position"] = v.position;
    j["monsterSubType"] = v.monsterSubType;
    j["itemId"] = v.itemId;
    j["buildingType"] = v.buildingType;
    j["type"] = v.type;
    j["victimId"] = v.victimId;
    j["participantId"] = v.participantId;
    j["timestamp"] = v.timestamp;
    j["towerType"] = v.towerType;
    j["assistingParticipantIds"] = v.assistingParticipantIds;
    j["skillSlot"] = v.skillSlot;
    j["killerId"] = v.killerId;
  }

  inline void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryEvent_t& v) {
    v.teamId = j.at("teamId").get<uint16_t>();
    v.laneType = j.at("laneType").get<std::string>();
    v.monsterType = j.at("monsterType").get<std::string>();
    v.position = j.at("position").get<LolMatchHistoryMatchHistoryPosition_t>();
    v.monsterSubType = j.at("monsterSubType").get<std::string>();
    v.itemId = j.at("itemId").get<uint16_t>();
    v.buildingType = j.at("buildingType").get<std::string>();
    v.type = j.at("type").get<std::string>();
    v.victimId = j.at("victimId").get<uint16_t>();
    v.participantId = j.at("participantId").get<uint16_t>();
    v.timestamp = j.at("timestamp").get<uint64_t>();
    v.towerType = j.at("towerType").get<std::string>();
    v.assistingParticipantIds = j.at("assistingParticipantIds").get<std::vector<uint16_t>>();
    v.skillSlot = j.at("skillSlot").get<uint16_t>();
    v.killerId = j.at("killerId").get<uint16_t>();
  }
  inline std::string to_string(const LolMatchHistoryMatchHistoryEvent_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
