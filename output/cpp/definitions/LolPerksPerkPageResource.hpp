#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolPerksPerkPageResource_t {
    std::vector<int32_t> selectedPerkIds;
    bool isActive;
    bool isDeletable;
    int32_t id;
    int32_t primaryStyleId;
    int32_t order;
    bool isValid;
    int32_t subStyleId;
    std::string name;
    bool isEditable;
    int32_t formatVersion;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkPageResource_t& v) {
    j["selectedPerkIds"] = v.selectedPerkIds;
    j["isActive"] = v.isActive;
    j["isDeletable"] = v.isDeletable;
    j["id"] = v.id;
    j["primaryStyleId"] = v.primaryStyleId;
    j["order"] = v.order;
    j["isValid"] = v.isValid;
    j["subStyleId"] = v.subStyleId;
    j["name"] = v.name;
    j["isEditable"] = v.isEditable;
    j["formatVersion"] = v.formatVersion;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkPageResource_t& v) {
    v.selectedPerkIds = j.at("selectedPerkIds").get<std::vector<int32_t>>();
    v.isActive = j.at("isActive").get<bool>();
    v.isDeletable = j.at("isDeletable").get<bool>();
    v.id = j.at("id").get<int32_t>();
    v.primaryStyleId = j.at("primaryStyleId").get<int32_t>();
    v.order = j.at("order").get<int32_t>();
    v.isValid = j.at("isValid").get<bool>();
    v.subStyleId = j.at("subStyleId").get<int32_t>();
    v.name = j.at("name").get<std::string>();
    v.isEditable = j.at("isEditable").get<bool>();
    v.formatVersion = j.at("formatVersion").get<int32_t>();
  }
}
