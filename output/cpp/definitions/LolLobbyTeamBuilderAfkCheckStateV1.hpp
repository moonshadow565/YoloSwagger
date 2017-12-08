#pragma once
#include <json.hpp>
#include <optional>
#include "LolLobbyTeamBuilderTbdInventory.hpp"
namespace leagueapi {
  struct LolLobbyTeamBuilderAfkCheckStateV1_t {
    int32_t_t remainingAfkMillis;
    bool_t afkReady;
    LolLobbyTeamBuilderTbdInventory_t inventoryDraft;
    uint32_t_t maxAfkMillis;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyTeamBuilderAfkCheckStateV1_t& v) {
    j["remainingAfkMillis"] = v.remainingAfkMillis;
    j["afkReady"] = v.afkReady;
    j["inventoryDraft"] = v.inventoryDraft;
    j["maxAfkMillis"] = v.maxAfkMillis;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyTeamBuilderAfkCheckStateV1_t& v) {
    v.remainingAfkMillis = j.at("remainingAfkMillis").get<int32_t_t>();
    v.afkReady = j.at("afkReady").get<bool_t>();
    v.inventoryDraft = j.at("inventoryDraft").get<LolLobbyTeamBuilderTbdInventory_t>();
    v.maxAfkMillis = j.at("maxAfkMillis").get<uint32_t_t>();
  }
  inline std::string to_string(const LolLobbyTeamBuilderAfkCheckStateV1_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
