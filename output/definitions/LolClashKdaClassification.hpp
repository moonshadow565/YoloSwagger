#ifndef SWAGGER_TYPES_LolClashKdaClassification_HPP
#define SWAGGER_TYPES_LolClashKdaClassification_HPP
#include <json.hpp>
namespace leagueapi {
  // 
  enum class LolClashKdaClassification {
    // 
    AVERAGE = 1,
    // 
    HIGH = 2,
    // 
    LOW = 0,
  };

  inline void to_json(nlohmann::json& j, const LolClashKdaClassification& v) {
    switch(v) {
      case LolClashKdaClassification::AVERAGE:
        j = "AVERAGE";
      break;
      case LolClashKdaClassification::HIGH:
        j = "HIGH";
      break;
      case LolClashKdaClassification::LOW:
        j = "LOW";
      break;
    }
  }

  inline void from_json(const nlohmann::json& j, LolClashKdaClassification& v) {
    const auto& s = j.get<std::string>();
    if(s == "AVERAGE"){
      v = LolClashKdaClassification::AVERAGE;
      return;
    }
    if(s == "HIGH"){
      v = LolClashKdaClassification::HIGH;
      return;
    }
    if(s == "LOW"){
      v = LolClashKdaClassification::LOW;
      return;
    }
  }

}
#endif // SWAGGER_TYPES_LolClashKdaClassification_HPP
