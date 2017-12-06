#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLoginLoginError_t {
    std::string description;
    std::string id;
    std::string messageId;
  };

  inline void to_json(nlohmann::json& j, const LolLoginLoginError_t& v) {
    j["description"] = v.description;
    j["id"] = v.id;
    j["messageId"] = v.messageId;
  }

  inline void from_json(const nlohmann::json& j, LolLoginLoginError_t& v) {
    v.description = j.at("description").get<std::string>();
    v.id = j.at("id").get<std::string>();
    v.messageId = j.at("messageId").get<std::string>();
  }
}
