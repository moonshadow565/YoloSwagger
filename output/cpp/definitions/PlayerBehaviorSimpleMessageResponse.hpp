#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerBehaviorSimpleMessageResponse_t {
    std::string msgId;
    std::string command;
    uint64_t accountId;
  };

  inline void to_json(nlohmann::json& j, const PlayerBehaviorSimpleMessageResponse_t& v) {
    j["msgId"] = v.msgId;
    j["command"] = v.command;
    j["accountId"] = v.accountId;
  }

  inline void from_json(const nlohmann::json& j, PlayerBehaviorSimpleMessageResponse_t& v) {
    v.msgId = j.at("msgId").get<std::string>();
    v.command = j.at("command").get<std::string>();
    v.accountId = j.at("accountId").get<uint64_t>();
  }
  inline std::string to_string(const PlayerBehaviorSimpleMessageResponse_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
