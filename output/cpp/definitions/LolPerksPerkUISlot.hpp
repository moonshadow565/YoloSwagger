#ifndef SWAGGER_TYPES_LolPerksPerkUISlot_HPP
#define SWAGGER_TYPES_LolPerksPerkUISlot_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolPerksPerkUISlot {
    // 
    std::vector<int32_t> perks;
    // 
    std::string type;
    // 
    std::string slotLabel;
  };

  inline void to_json(nlohmann::json& j, const LolPerksPerkUISlot& v) {
    j["perks"] = v.perks;
    j["type"] = v.type;
    j["slotLabel"] = v.slotLabel;
  }

  inline void from_json(const nlohmann::json& j, LolPerksPerkUISlot& v) {
    v.perks = j.at("perks").get<std::vector<int32_t>>;
    v.type = j.at("type").get<std::string>;
    v.slotLabel = j.at("slotLabel").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolPerksPerkUISlot_HPP
