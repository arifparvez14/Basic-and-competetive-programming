import Foundation

public class LinkedListNode<T> {
    var value: T
    var next: LinkedListNode?
    weak var previous: LinkedListNode?
    
    public init(value: T) {
        self.value = value
    }
}

public class LinkedList<T> {
    public typealias Node = LinkedListNode<T>
    
    private var head: Node?
    
    public var isEmpty: Bool {
        return head == nil
    }
    
    public var first: Node? {
        return head
    }
    
    public var last: Node? {
        guard var node = head else {
            return nil
        }
        
        while let next = node.next {
            node = next
        }
        
        return node
    }
    
    // Append at last
    public func append(value: T) {
        let newNode = Node(value: value)
        if let lastNode = last {
            newNode.previous = lastNode
            lastNode.next = newNode
        } else {
            head = newNode
        }
    }
    
    //Count nodes
    public var count: Int {
        guard var node = head else {
            return 0
        }
        
        var count = 1
        while let next = node.next {
            node = next
            count += 1
        }
        
        return count
    }
    
    //Get node at index
    public func node(atIndex index: Int) -> Node {
        if index == 0 {
            return head!
        } else {
            var node = head!.next
            for _ in 1..<index {
                node = node?.next
                if node == nil {
                    break
                }
                    
            }
            return node!
        }
    }
    
    public subscript(index: Int) -> T {
        let node = node(atIndex: index)
        return node.value
    }
    
    //Insert
    public func insert(_ node: Node, atIndex index: Int) {
        let newNode = node
        
        if index == 0 {
            newNode.next = head
            head?.previous = newNode
            head = newNode
        } else {
            let prev = self.node(atIndex: index - 1)
            let next = prev.next
            
            newNode.previous = prev
            newNode.next = prev.next
            
            prev.next = newNode
            next?.previous = newNode
        }
    }
    
    //Remove
    public func removeAll() {
        head = nil
    }

    public func remove(node: Node) -> T {
        let prev = node.previous
        let next = node.next
        
        if let prev = prev {
            prev.next = next
        } else {
            head = next
        }
        next?.previous = prev
        
        node.previous = nil
        node.next = nil
        return node.value
    }
    
    public func removeAt(_ index: Int) -> T {
        let node = node(atIndex: index)
        return remove(node: node)
    }
    
    public func removeLast() -> T {
        return remove(node: last!)
    }
    
    //reverse
    public func reverse() {
        var node = head
        
        while let currentNode = node {
            node = currentNode.next
            swap(&currentNode.next, &currentNode.previous)
            head = currentNode
        }
    }
}

let list = LinkedList<String>()
list.append(value: "Hello")
list.append(value: "World")
list.count

list.node(atIndex: 0).value
list.node(atIndex: 1).value

list[0]
list[1]

list.insert(LinkedListNode(value: "Swift"), atIndex: 1)
list[0]
list[1]
list[2]

list.remove(node: list.first!)
list.count
list[0]
list[1]

list.removeLast()
list.count
list[0]

list.removeAt(0)
list.count





