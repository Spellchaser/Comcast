/**
 * CommNets
 * node.h
 * Purpose: Nodes are points of the network, i.e. hosts and routers
 * 
 * @author Eui Han
 * @version 0.1 04/05/16
 */

#ifndef NODE_H
#define NODE_H

#include "link.h"

class Node{
  private:
    int bits_sent_=0;
    std::string name_;
    std::vector<Link*> links_; 
    std::vector<Node*> neighbors_;
    // bool routerorhostnode?
  public: 
    Node(const std::string name);
    Node GetConnectedNode();
    int AddLink(Link&);
    std::vector<Link*> GetLinks();
    void SendPacket(const &Packet);
    void RecievePacket(const &Packet);
    void print();
    void act();
};

#endif
