#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPreEndOfGameSequenceEvent_t {
    std::string name;
    int32_t priority;
  };

  inline void to_json(nlohmann::json& j, const LolPreEndOfGameSequenceEvent_t& v) {
    j["name"] = v.name;
    j["priority"] = v.priority;
  }

  inline void from_json(const nlohmann::json& j, LolPreEndOfGameSequenceEvent_t& v) {
    v.name = j.at("name").get<std::string>();
    v.priority = j.at("priority").get<int32_t>();
  }
}
