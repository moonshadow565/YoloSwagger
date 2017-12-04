#ifndef SWAGGER_TYPES_LolHonorV2Reward_HPP
#define SWAGGER_TYPES_LolHonorV2Reward_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  struct LolHonorV2Reward {
    // 
    std::string message;
    // 
    int32_t quantity;
    // 
    std::string rewardType;
  };

  inline void to_json(nlohmann::json& j, const LolHonorV2Reward& v) {
    j["message"] = v.message;
    j["quantity"] = v.quantity;
    j["rewardType"] = v.rewardType;
  }

  inline void from_json(const nlohmann::json& j, LolHonorV2Reward& v) {
    v.message = j.at("message").get<std::string>;
    v.quantity = j.at("quantity").get<int32_t>;
    v.rewardType = j.at("rewardType").get<std::string>;
  }

}
#endif // SWAGGER_TYPES_LolHonorV2Reward_HPP
