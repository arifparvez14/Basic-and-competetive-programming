import Foundation

/*
      4
   /     \
  2       7
 / \     / \
 1   3   6   9
 /    \  /    \
 NULL NULL NULL NULL
 
 */


public indirect enum BinaryTree<T> {
    case node(BinaryTree<T>, T, BinaryTree<T>)
    case empty
}

extension BinaryTree: CustomStringConvertible {
    public var description: String {
        switch self {
        case let .node(left, value, right):
            return "value: \(value), left = [\(left.description)], right = [\(right.description)]"
        case .empty:
            return ""
        }
    }
    
    public var count: Int {
        switch self {
        case let .node(left, _, right):
            return left.count + 1 + right.count
        case .empty:
            return 0
        }
    }
}


let node1 = BinaryTree.node(.empty, 1, .empty)
let node3 = BinaryTree.node(.empty, 3, .empty)

let node6 = BinaryTree.node(.empty, 6, .empty)
let node9 = BinaryTree.node(.empty, 9, .empty)

let node2 = BinaryTree.node(node1, 2, node3)
let node7 = BinaryTree.node(node6, 7, node9)

let tree = BinaryTree.node(node2, 4, node7)

print(tree.description)
print(tree.count)


