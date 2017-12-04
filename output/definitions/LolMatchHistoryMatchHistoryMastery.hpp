#ifndef SWAGGER_TYPES_LolMatchHistoryMatchHistoryMastery_HPP
#define SWAGGER_TYPES_LolMatchHistoryMatchHistoryMastery_HPP
#include <json.hpp>
namespace test {
  // 
  struct LolMatchHistoryMatchHistoryMastery {
'    // 
    uint16_t masteryId;
    // 
    uint16_t rank;
  };

  void to_json(nlohmann::json& j, const LolMatchHistoryMatchHistoryMastery& v) {
    j["masteryId"] = v.masteryId;
    j["rank"] = v.rank;
  }

  void from_json(const nlohmann::json& j, LolMatchHistoryMatchHistoryMastery& v) {
    v.masteryId = j.at("masteryId").get<uint16_t>;
    v.rank = j.at("rank").get<uint16_t>;
  }

}
#endif // SWAGGER_TYPES_LolMatchHistoryMatchHistoryMastery_HPP
