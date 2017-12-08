#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolStoreBundleItemDTO_t {
    int32_t itemId;
    int64_t rp;
    std::string description;
    int64_t ip;
    bool owned;
    std::string iconUrl;
    int64_t discountedRp;
    std::string inventoryType;
    uint32_t quantity;
    std::string name;
  };

  inline void to_json(nlohmann::json& j, const LolStoreBundleItemDTO_t& v) {
    j["itemId"] = v.itemId;
    j["rp"] = v.rp;
    j["description"] = v.description;
    j["ip"] = v.ip;
    j["owned"] = v.owned;
    j["iconUrl"] = v.iconUrl;
    j["discountedRp"] = v.discountedRp;
    j["inventoryType"] = v.inventoryType;
    j["quantity"] = v.quantity;
    j["name"] = v.name;
  }

  inline void from_json(const nlohmann::json& j, LolStoreBundleItemDTO_t& v) {
    v.itemId = j.at("itemId").get<int32_t>();
    v.rp = j.at("rp").get<int64_t>();
    v.description = j.at("description").get<std::string>();
    v.ip = j.at("ip").get<int64_t>();
    v.owned = j.at("owned").get<bool>();
    v.iconUrl = j.at("iconUrl").get<std::string>();
    v.discountedRp = j.at("discountedRp").get<int64_t>();
    v.inventoryType = j.at("inventoryType").get<std::string>();
    v.quantity = j.at("quantity").get<uint32_t>();
    v.name = j.at("name").get<std::string>();
  }
  inline std::string to_string(const LolStoreBundleItemDTO_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
