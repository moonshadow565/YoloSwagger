#ifndef SWAGGER_TYPES_LolChatGameflowGameMap_HPP
#define SWAGGER_TYPES_LolChatGameflowGameMap_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolChatGameflowGameMap {
    // 
    int64_t id;
  };

  inline void to_json(nlohmann::json& j, const LolChatGameflowGameMap& v) {
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolChatGameflowGameMap& v) {
    v.id = j.at("id").get<int64_t>;
  }

}
#endif // SWAGGER_TYPES_LolChatGameflowGameMap_HPP
