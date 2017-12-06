#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PlayerMessagingNotificationResource_t {
    std::string body;
    std::string msgId;
    int32_t id;
    int32_t status;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const PlayerMessagingNotificationResource_t& v) {
    j["body"] = v.body;
    j["msgId"] = v.msgId;
    j["id"] = v.id;
    j["status"] = v.status;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, PlayerMessagingNotificationResource_t& v) {
    v.body = j.at("body").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.status = j.at("status").get<int32_t>();
    v.title = j.at("title").get<std::string>();
  }
}
