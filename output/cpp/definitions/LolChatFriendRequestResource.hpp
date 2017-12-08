#pragma once
#include <json.hpp>
#include <optional>
#include "LolChatFriendRequestDirection.hpp"
namespace leagueapi {
  struct LolChatFriendRequestResource_t {
    std::string note;
    uint64_t id;
    LolChatFriendRequestDirection_t direction;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolChatFriendRequestResource_t& v) {
    j["note"] = v.note;
    j["id"] = v.id;
    j["direction"] = v.direction;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolChatFriendRequestResource_t& v) {
    v.note = j.at("note").get<std::string>();
    v.id = j.at("id").get<uint64_t>();
    v.direction = j.at("direction").get<LolChatFriendRequestDirection_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolChatFriendRequestResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
