#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolChampSelectChampSelectChatRoomDetails_t {
    std::optional<std::string> chatRoomPassword;
    std::string chatRoomName;
  };

  inline void to_json(nlohmann::json& j, const LolChampSelectChampSelectChatRoomDetails_t& v) {
    if(v.chatRoomPassword)
      j["chatRoomPassword"] = *v.chatRoomPassword;
    j["chatRoomName"] = v.chatRoomName;
  }

  inline void from_json(const nlohmann::json& j, LolChampSelectChampSelectChatRoomDetails_t& v) {
    if(auto it = j.find("chatRoomPassword"); it != j.end() !it->is_null())
      v.chatRoomPassword = it->get<std::string>();
    v.chatRoomName = j.at("chatRoomName").get<std::string>();
  }
}
