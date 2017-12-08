#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolEndOfGameGameDataChampionSummary_t {
    std::string_t alias;
    int32_t_t id;
  };

  inline void to_json(nlohmann::json& j, const LolEndOfGameGameDataChampionSummary_t& v) {
    j["alias"] = v.alias;
    j["id"] = v.id;
  }

  inline void from_json(const nlohmann::json& j, LolEndOfGameGameDataChampionSummary_t& v) {
    v.alias = j.at("alias").get<std::string_t>();
    v.id = j.at("id").get<int32_t_t>();
  }
  inline std::string to_string(const LolEndOfGameGameDataChampionSummary_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
