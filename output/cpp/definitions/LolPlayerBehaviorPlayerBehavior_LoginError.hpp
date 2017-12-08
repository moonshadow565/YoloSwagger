#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPlayerBehaviorPlayerBehavior_LoginError_t {
    std::string_t messageId;
    std::string_t description;
    std::string_t id;
  };

  inline void to_json(nlohmann::json& j, const LolPlayerBehaviorPlayerBehavior_LoginError_t& v) {
    j["messageId"] = v.messageId;
    j["description"] = v.description;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolPlayerBehaviorPlayerBehavior_LoginError_t& v) {
    v.messageId = j.at("messageId").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
    v.id = j.at("id").get<std::string_t>();
  }
  inline std::string to_string(const LolPlayerBehaviorPlayerBehavior_LoginError_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
