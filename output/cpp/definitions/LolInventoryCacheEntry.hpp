#pragma once
#include <json.hpp>
#include <optional>
namespace leagueapi {
  struct LolInventoryCacheEntry_t {
    std::string_t signedInventoryJwt;
    bool_t valid;
    uint64_t_t expirationMS;
  };

  inline void to_json(nlohmann::json& j, const LolInventoryCacheEntry_t& v) {
    j["signedInventoryJwt"] = v.signedInventoryJwt;
    j["valid"] = v.valid;
    j["expirationMS"] = v.expirationMS;
  }

  inline void from_json(const nlohmann::json& j, LolInventoryCacheEntry_t& v) {
    v.signedInventoryJwt = j.at("signedInventoryJwt").get<std::string_t>();
    v.valid = j.at("valid").get<bool_t>();
    v.expirationMS = j.at("expirationMS").get<uint64_t_t>();
  }
  inline std::string to_string(const LolInventoryCacheEntry_t& v) {
    nlohmann::json j = v;
    return j.dump();  }

}
