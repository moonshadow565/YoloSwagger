#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolLobbyLobbyPositionPreferences_t {
    std::string secondPreference;
    std::string firstPreference;
  };

  inline void to_json(nlohmann::json& j, const LolLobbyLobbyPositionPreferences_t& v) {
    j["secondPreference"] = v.secondPreference;
    j["firstPreference"] = v.firstPreference;
  }

  inline void from_json(const nlohmann::json& j, LolLobbyLobbyPositionPreferences_t& v) {
    v.secondPreference = j.at("secondPreference").get<std::string>();
    v.firstPreference = j.at("firstPreference").get<std::string>();
  }
  inline std::string to_string(const LolLobbyLobbyPositionPreferences_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
