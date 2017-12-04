#ifndef SWAGGER_TYPES_LolChatQueue_HPP
#define SWAGGER_TYPES_LolChatQueue_HPP
#include <json.hpp>
#include "LolChatQueueGameTypeConfig.hpp"
namespace leagueapi {
  // 
  struct LolChatQueue {
    // 
    LolChatQueueGameTypeConfig gameTypeConfig;
    // 
    std::string gameMode;
    // 
    std::string type;
    // 
    int32_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatQueue& v) {
    j["gameTypeConfig"] = v.gameTypeConfig;
    j["gameMode"] = v.gameMode;
    j["type"] = v.type;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatQueue& v) {
    v.gameTypeConfig = j.at("gameTypeConfig").get<LolChatQueueGameTypeConfig>;
    v.gameMode = j.at("gameMode").get<std::string>;
    v.type = j.at("type").get<std::string>;
    v.id = j.at("id").get<int32_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatQueue_HPP
