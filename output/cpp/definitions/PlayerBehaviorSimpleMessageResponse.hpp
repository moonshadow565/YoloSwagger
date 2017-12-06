#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerBehaviorSimpleMessageResponse_t {
    uint64_t accountId;
    std::string msgId;
    std::string command;
  };

  inline void to_json(nlohmann::json& j, const PlayerBehaviorSimpleMessageResponse_t& v) {
    j["accountId"] = v.accountId;
    j["msgId"] = v.msgId;
    j["command"] = v.command;
  }

  inline void from_json(const nlohmann::json& j, PlayerBehaviorSimpleMessageResponse_t& v) {
    v.accountId = j.at("accountId").get<uint64_t>();
    v.msgId = j.at("msgId").get<std::string>();
    v.command = j.at("command").get<std::string>();
  }
}
