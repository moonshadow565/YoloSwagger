#pragma once
#include <json.hpp>
#include <optional>
#include "MemberSinceDto.hpp"
namespace leagueapi {
  struct ClubMembershipDto_t {
    std::vector<MemberSinceDto_t> invitedMembers;
    std::vector<MemberSinceDto_t> nominatedMembers;
    std::vector<MemberSinceDto_t> removedMembers;
    std::vector<MemberSinceDto_t> activeMembers;
    std::string clubKey;
  };

  inline void to_json(nlohmann::json& j, const ClubMembershipDto_t& v) {
    j["invitedMembers"] = v.invitedMembers;
    j["nominatedMembers"] = v.nominatedMembers;
    j["removedMembers"] = v.removedMembers;
    j["activeMembers"] = v.activeMembers;
    j["clubKey"] = v.clubKey;
  }

  inline void from_json(const nlohmann::json& j, ClubMembershipDto_t& v) {
    v.invitedMembers = j.at("invitedMembers").get<std::vector<MemberSinceDto_t>>();
    v.nominatedMembers = j.at("nominatedMembers").get<std::vector<MemberSinceDto_t>>();
    v.removedMembers = j.at("removedMembers").get<std::vector<MemberSinceDto_t>>();
    v.activeMembers = j.at("activeMembers").get<std::vector<MemberSinceDto_t>>();
    v.clubKey = j.at("clubKey").get<std::string>();
  }
}
