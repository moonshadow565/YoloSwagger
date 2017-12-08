#pragma once
#include <json.hpp>
#include <optional>
#include "BindingFullTypeIdentifier.hpp"
namespace leagueapi {
  // Describes an event.
  struct BindingFullEventHelp_t {
    BindingFullTypeIdentifier_t type;
    std::vector<std::string> tags;
    std::string_t nameSpace;
    std::string_t description;
    std::string_t name;
  };

  inline void to_json(nlohmann::json& j, const BindingFullEventHelp_t& v) {
    j["type"] = v.type;
    j["tags"] = v.tags;
    j["nameSpace"] = v.nameSpace;
    j["description"] = v.description;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, BindingFullEventHelp_t& v) {
    v.type = j.at("type").get<BindingFullTypeIdentifier_t>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.nameSpace = j.at("nameSpace").get<std::string_t>();
    v.description = j.at("description").get<std::string_t>();
    v.name = j.at("name").get<std::string_t>();
  }
  inline std::string to_string(const BindingFullEventHelp_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
