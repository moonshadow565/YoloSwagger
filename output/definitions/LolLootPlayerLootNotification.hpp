#ifndef SWAGGER_TYPES_LolLootPlayerLootNotification_HPP
#define SWAGGER_TYPES_LolLootPlayerLootNotification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolLootPlayerLootNotification {
    // 
    bool acknowledged;
    // 
    int32_t count;
    // 
    std::string id;
  };

  inline void to_json(nlohmann::json& j, const LolLootPlayerLootNotification& v) {
    j["acknowledged"] = v.acknowledged;
    j["count"] = v.count;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolLootPlayerLootNotification& v) {
    v.acknowledged = j.at("acknowledged").get<bool>;
    v.count = j.at("count").get<int32_t>;
    v.id = j.at("id").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolLootPlayerLootNotification_HPP
