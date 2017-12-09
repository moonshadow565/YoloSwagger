#pragma once
#include <json.hpp>
namespace leagueapi {
  enum class RecofrienderFriendState_t {
    BLOCKED_E = 2,
    NONE_E = 0,
    FRIEND_E = 1,
  };

  inline void to_json(nlohmann::json& j, const RecofrienderFriendState_t& v) {
    switch(v) {
      case RecofrienderFriendState_t::BLOCKED_E:
        j = "BLOCKED";
      break;
      case RecofrienderFriendState_t::NONE_E:
        j = "NONE";
      break;
      case RecofrienderFriendState_t::FRIEND_E:
        j = "FRIEND";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, RecofrienderFriendState_t& v) {
    const auto& s = j.get<std::string>();
    if(s == "BLOCKED"){
      v = RecofrienderFriendState_t::BLOCKED_E;
      return;
    }
    if(s == "NONE"){
      v = RecofrienderFriendState_t::NONE_E;
      return;
    }
    if(s == "FRIEND"){
      v = RecofrienderFriendState_t::FRIEND_E;
      return;
    }
  }
  inline std::string to_string(const RecofrienderFriendState_t& v) {
    switch(v) {
      case RecofrienderFriendState_t::BLOCKED_E:
        return "BLOCKED";
      case RecofrienderFriendState_t::NONE_E:
        return "NONE";
      case RecofrienderFriendState_t::FRIEND_E:
        return "FRIEND";
    }
  }

}
