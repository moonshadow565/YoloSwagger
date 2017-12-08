#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct PatcherHeaderEntry_t {
    std::string_t value;
    std::string_t key;
  };

  inline void to_json(nlohmann::json& j, const PatcherHeaderEntry_t& v) {
    j["value"] = v.value;
    j["key"] = v.key;
  }

  inline void from_json(const nlohmann::json& j, PatcherHeaderEntry_t& v) {
    v.value = j.at("value").get<std::string_t>();
    v.key = j.at("key").get<std::string_t>();
  }
  inline std::string to_string(const PatcherHeaderEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
