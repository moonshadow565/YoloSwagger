#ifndef SWAGGER_TYPES_LolStoreSale_HPP
#define SWAGGER_TYPES_LolStoreSale_HPP
#include <json.hpp>
#include "LolStoreItemCost.hpp"
namespace test {
  // 
  struct LolStoreSale {
'    // 
    std::string endDate;
    // 
    std::vector<LolStoreItemCost> prices;
    // 
    std::string startDate;
  };

  void to_json(nlohmann::json& j, const LolStoreSale& v) {
    j["endDate"] = v.endDate;
    j["prices"] = v.prices;
    j["startDate"] = v.startDate;
  }

  void from_json(const nlohmann::json& j, LolStoreSale& v) {
    v.endDate = j.at("endDate").get<std::string>;
    v.prices = j.at("prices").get<std::vector<LolStoreItemCost>>;
    v.startDate = j.at("startDate").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolStoreSale_HPP
