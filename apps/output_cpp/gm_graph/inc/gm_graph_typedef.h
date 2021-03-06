#ifndef GM_GRAPH_TYPEDEF_H
#define GM_GRAPH_TYPEDEF_H

#ifdef GM_NODE64
typedef int64_t edge_t;
typedef int64_t node_t;
#elif  GM_EDGE64
typedef int32_t edge_t;
typedef int64_t node_t;
#else
typedef int32_t edge_t;
typedef int32_t node_t;
#endif

typedef edge_t index_t; 

#endif
