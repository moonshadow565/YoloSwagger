#pragma once
#include <json.hpp>
#include <optional>
#include "PatcherNotificationId.hpp"
namespace leagueapi {
  struct PatcherNotification_t {
    PatcherNotificationId_t notificationId;
    std::string_t id;
  };

  inline void to_json(nlohmann::json& j, const PatcherNotification_t& v) {
    j["notificationId"] = v.notificationId;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, PatcherNotification_t& v) {
    v.notificationId = j.at("notificationId").get<PatcherNotificationId_t>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const PatcherNotification_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
