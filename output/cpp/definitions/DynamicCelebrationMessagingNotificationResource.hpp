#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct DynamicCelebrationMessagingNotificationResource_t {
    std::string itemId;
    int32_t status;
    std::string celebrationBody;
    std::string msgId;
    std::string celebrationType;
    std::string itemQuantity;
    std::string inventoryType;
    std::string celebrationMessage;
    int32_t id;
    std::string celebrationTitle;
  };

  inline void to_json(nlohmann::json& j, const DynamicCelebrationMessagingNotificationResource_t& v) {
    j["itemId"] = v.itemId;
    j["status"] = v.status;
    j["celebrationBody"] = v.celebrationBody;
    j["msgId"] = v.msgId;
    j["celebrationType"] = v.celebrationType;
    j["itemQuantity"] = v.itemQuantity;
    j["inventoryType"] = v.inventoryType;
    j["celebrationMessage"] = v.celebrationMessage;
    j["id"] = v.id;
    j["celebrationTitle"] = v.celebrationTitle;
  }

  inline void from_json(const nlohmann::json& j, DynamicCelebrationMessagingNotificationResource_t& v) {
    v.itemId = j.at("itemId").get<std::string>();
    v.status = j.at("status").get<int32_t>();
    v.celebrationBody = j.at("celebrationBody").get<std::string>();
    v.msgId = j.at("msgId").get<std::string>();
    v.celebrationType = j.at("celebrationType").get<std::string>();
    v.itemQuantity = j.at("itemQuantity").get<std::string>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.celebrationMessage = j.at("celebrationMessage").get<std::string>();
    v.id = j.at("id").get<int32_t>();
    v.celebrationTitle = j.at("celebrationTitle").get<std::string>();
  }
  inline std::string to_string(const DynamicCelebrationMessagingNotificationResource_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
