#pragma once
#include <json.hpp>
#include <optional>
#include "SeriesMediaDTO.hpp"
#include "SeriesAlertDTO.hpp"
namespace leagueapi {
  struct SeriesDTO_t {
    std::vector<SeriesAlertDTO_t> warnings;
    std::string description;
    std::string internalName;
    int64_t startDate;
    std::string id;
    std::vector<std::string> tags;
    std::string parentName;
    int64_t endDate;
    SeriesMediaDTO_t media;
    std::string title;
  };

  inline void to_json(nlohmann::json& j, const SeriesDTO_t& v) {
    j["warnings"] = v.warnings;
    j["description"] = v.description;
    j["internalName"] = v.internalName;
    j["startDate"] = v.startDate;
    j["id"] = v.id;
    j["tags"] = v.tags;
    j["parentName"] = v.parentName;
    j["endDate"] = v.endDate;
    j["media"] = v.media;
    j["title"] = v.title;
  }

  inline void from_json(const nlohmann::json& j, SeriesDTO_t& v) {
    v.warnings = j.at("warnings").get<std::vector<SeriesAlertDTO_t>>();
    v.description = j.at("description").get<std::string>();
    v.internalName = j.at("internalName").get<std::string>();
    v.startDate = j.at("startDate").get<int64_t>();
    v.id = j.at("id").get<std::string>();
    v.tags = j.at("tags").get<std::vector<std::string>>();
    v.parentName = j.at("parentName").get<std::string>();
    v.endDate = j.at("endDate").get<int64_t>();
    v.media = j.at("media").get<SeriesMediaDTO_t>();
    v.title = j.at("title").get<std::string>();
  }
  inline std::string to_string(const SeriesDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
